//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "GetHeadImageDelegate.h"
#import "IContactMgrExt.h"
#import "MMService.h"

@class AFHTTPSessionManager, EGOCache, GetHeadImage, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface MMAvatarService : MMService <IContactMgrExt, GetHeadImageDelegate, MMService>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSendingDownloadCGI;
    EGOCache *_egoCache;
    AFHTTPSessionManager *_downloadMgr;
    NSMutableDictionary *_downloadingUrlBlocks;
    NSMutableArray *_waittingUserNames;
    NSMutableArray *_groupChatTasks;
    GetHeadImage *_cgiGetter;
    NSMutableDictionary *_cgiTasks;
}

@property(retain, nonatomic) NSMutableDictionary *cgiTasks; // @synthesize cgiTasks=_cgiTasks;
@property(retain, nonatomic) GetHeadImage *cgiGetter; // @synthesize cgiGetter=_cgiGetter;
@property(retain, nonatomic) NSMutableArray *groupChatTasks; // @synthesize groupChatTasks=_groupChatTasks;
@property(nonatomic) BOOL isSendingDownloadCGI; // @synthesize isSendingDownloadCGI=_isSendingDownloadCGI;
@property(retain, nonatomic) NSMutableArray *waittingUserNames; // @synthesize waittingUserNames=_waittingUserNames;
@property(retain, nonatomic) NSMutableDictionary *downloadingUrlBlocks; // @synthesize downloadingUrlBlocks=_downloadingUrlBlocks;
@property(retain, nonatomic) AFHTTPSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) EGOCache *egoCache; // @synthesize egoCache=_egoCache;
- (void).cxx_destruct;
- (void)onDonwloadImage:(id)arg1 forScene:(int)arg2 isHD:(BOOL)arg3 imageData:(id)arg4;
- (BOOL)isNeedGetImage:(id)arg1 forScene:(int)arg2 isHD:(BOOL)arg3 isForce:(BOOL)arg4;
- (void)makeAvatarWithMemberList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateGroupChatAvatarWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)signalWithContact:(id)arg1;
- (void)groupChatAvatarWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAvatarWithContact:(id)arg1;
- (void)updateAvatarWithContact:(id)arg1 image:(id)arg2;
- (void)updateAvatarWithContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)downloadAvatarImageWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvatarImageWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAvatarWithUrl:(id)arg1 userName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)checkIsDwonloadingAndAddCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)callBackForKey:(id)arg1 withImage:(id)arg2 userName:(id)arg3 url:(id)arg4 err:(id)arg5;
- (void)callBackFailedForUserNames:(id)arg1 err:(id)arg2;
- (void)updateAvatarImageWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvatarImageWithUrl:(id)arg1 userName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvatarImageWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)avatarHDImageWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)avatarImageWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)hasSpecialAvatarWithUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCache;
- (id)cachedAvatarImageWithUrl:(id)arg1;
- (id)cachedAvatarHDImageWithContact:(id)arg1;
- (id)cachedAvatarImageWithContact:(id)arg1;
- (void)getSelfAvatarHDImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSelfAvatarImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)brandSessionHolderAvatar;
- (id)defaultHDAvatar;
- (id)defaultAvatarImage;
- (id)avatarCachePath;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

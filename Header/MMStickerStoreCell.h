//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface MMStickerStoreCell : NSView
{
    NSImageView *_iconView;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSButton *_actionButton;
    NSButton *_deleteButton;
    NSProgressIndicator *_progressIndicator;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

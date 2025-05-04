@interface AWEPlayInteractionDescriptionVideoDurationController : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionContext descriptionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getTailExtraModelWithContext:;
- (id)calculateTruncationTokenWithContext:;
- (id)setTruncationTokenIfNeedWithContext:;
- (void).cxx_destruct;
- (id)descriptionContext;
- (void)setDescriptionContext:;
+ (id)createPlainTextTailLabelWithAttributedText:;
+ (id)getVideoDurationAttributedStringWithModel:referString:;
+ (id)getVideoFormatDurationStringWithModel:contentMode:referString:;
+ (id)videoDurationFont;
@end

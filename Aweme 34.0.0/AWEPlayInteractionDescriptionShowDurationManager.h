@interface AWEPlayInteractionDescriptionShowDurationManager : NSObject
- (id)aAWEPlayInteractionAdapter;
- (BOOL)shouldShowDurationWithModel:referString:enterFrom:;
- (id)getVideoFormatDurationStringWithModel:descriptionLabelFont:contentMode:;
- (id)getVideoDurationAccessibilityStringWithAweme:;
- (BOOL)enableShowDuration;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)sharedInstance;
@end

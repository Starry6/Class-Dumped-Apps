@interface AWECoverTextUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)convertTextAlignment:;
+ (id)draftResourceIDsToDownloadForPublishViewModel:;
+ (void)updateWithDownloadedEffects:publishViewModel:completion:;
+ (id)colorFromARGBString:;
+ (void)textCutOffTextView:lengthLimit:lineLimit:;
+ (id)monitorExceptionWithError:;
+ (int)convertLineJoinMode:;
+ (id)storyFontModelChangeSize:withRate:;
+ (BOOL)textCutOffTextView:lengthLimit:;
+ (BOOL)textCutOffTextView:lineLimit:;
+ (int)convertTextDrawMode:;
+ (id)storyTextAlignmentToString:;
+ (BOOL)textsNotEmpty:;
+ (BOOL)coverTextModel:equal:;
@end

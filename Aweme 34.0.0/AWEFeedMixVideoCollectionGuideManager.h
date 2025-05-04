@interface AWEFeedMixVideoCollectionGuideManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordMixCollectionGuide;
- (void)cleanMixCollectionGuideAllRecording;
- (void)cleanFeedMixCollectionGuideExitRecording;
- (BOOL)isMixCollectionGuideSametDaySinceLastShow;
- (void)cleanMixCollectionGuideShowNum;
@end

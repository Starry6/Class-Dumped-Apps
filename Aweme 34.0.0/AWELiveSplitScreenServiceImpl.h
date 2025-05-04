@interface AWELiveSplitScreenServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)fetchScreenAvailableWidth;
- (double)fetchScreenAvailableHeight;
- (BOOL)isSplitScreenMode;
- (void)splitScreenBreakPointUpdateAction;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end

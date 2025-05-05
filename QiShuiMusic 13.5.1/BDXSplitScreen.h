@interface BDXSplitScreen : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)fetchScreenAvailableHeight;
- (double)fetchScreenAvailableWidth;
- (double)getScreenAvailableHeight;
- (double)getScreenAvailableWidth;
- (BOOL)isSplitScreenMode;
+ (id)shareInstance;
@end

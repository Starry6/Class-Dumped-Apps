@interface APSignManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getColorInfo:biz:param:ext:error:;
- (int)initColorInfo:;
- (id)preColorInfo:ext:error:;
- (void)updateColorCode:code:;
- (id)init;
- (int)getMode:;
+ (id)sharedInstance;
@end

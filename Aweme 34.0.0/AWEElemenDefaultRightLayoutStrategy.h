@interface AWEElemenDefaultRightLayoutStrategy : NSObject
@property (nonatomic) NSArray layouts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertNewDislikeElementIfNeeded:context:;
- (BOOL)isInteractionOptEnable;
- (id)elementGroupLayoutWithContext:;
- (void)setLayouts:;
- (id)layouts;
- (void).cxx_destruct;
+ (BOOL)activateWithContext:;
@end

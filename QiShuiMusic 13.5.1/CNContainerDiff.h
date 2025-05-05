@interface CNContainerDiff : NSObject
@property (nonatomic) NSArray updates;
- (void).cxx_destruct;
- (void)setUpdates:;
- (id)description;
- (id)updates;
- (id)initWithUpdates:;
+ (id)diffContainer:to:;
@end

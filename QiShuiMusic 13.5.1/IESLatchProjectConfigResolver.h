@interface IESLatchProjectConfigResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveConfig:bag:withEvent:;
@end

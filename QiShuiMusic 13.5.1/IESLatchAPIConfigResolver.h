@interface IESLatchAPIConfigResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveAPI:forName:;
- (id)resolveConfig:bag:withEvent:;
- (id)resolveParams:forName:;
@end

@interface IESLatchPageListConfigResolver : NSObject
@property (nonatomic) NSMutableDictionary resolveErrors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveConfig:bag:withEvent:;
- (id)resolveErrors;
- (void)setResolveErrors:;
- (void).cxx_destruct;
@end

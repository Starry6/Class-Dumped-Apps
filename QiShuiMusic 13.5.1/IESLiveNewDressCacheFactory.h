@interface IESLiveNewDressCacheFactory : NSObject
@property (nonatomic) NSMutableDictionary modelClasses;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addModelCacheClass:;
- (id)createModelCacheWithDressType:;
- (id)modelClasses;
- (void)setModelClasses:;
- (id)init;
- (void).cxx_destruct;
@end

@interface BDSmartServerIESML : NSObject
@property (nonatomic) NSDictionary modelDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modelDict;
- (void)predictWithKey:inputParams:async:completion:;
- (void)setModelDict:;
- (void)setUpWithUrl:completion:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end

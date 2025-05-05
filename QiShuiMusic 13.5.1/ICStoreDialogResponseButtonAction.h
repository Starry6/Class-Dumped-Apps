@interface ICStoreDialogResponseButtonAction : NSObject
@property (nonatomic) NSDictionary actionDictionary;
@property (nonatomic) NSString kind;
@property (nonatomic) q type;
@property (nonatomic) NSString buyParams;
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString subtarget;
@property (nonatomic) NSString URLString;
- (id)URLString;
- (id)kind;
- (long long)type;
- (id)itemName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)buyParams;
- (id)actionDictionary;
- (id)initWithResponseButtonActionDictionary:;
- (id)subtarget;
@end

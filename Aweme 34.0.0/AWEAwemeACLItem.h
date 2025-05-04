@interface AWEAwemeACLItem : MTLModel
@property (nonatomic) Q status;
@property (nonatomic) Q showType;
@property (nonatomic) NSString toastMessage;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString panel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)toastMessage;
- (void)setToastMessage:;
- (id)jsonStringValue;
- (id)dictionaryValue;
- (id)init;
- (void)setStatus:;
- (id)extra;
- (void).cxx_destruct;
- (unsigned long long)status;
- (BOOL)isEqual:;
- (id)panel;
- (void)setShowType:;
- (unsigned long long)showType;
- (void)setPanel:;
+ (id)JSONKeyPathsByPropertyKey;
@end

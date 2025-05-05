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
- (id)jsonStringValue;
- (void)setExtra:;
- (void)setToastMessage:;
- (id)toastMessage;
- (void)setStatus:;
- (id)extra;
- (id)init;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (unsigned long long)status;
- (BOOL)isEqual:;
- (id)panel;
- (unsigned long long)showType;
- (void)setShowType:;
- (void)setPanel:;
+ (id)JSONKeyPathsByPropertyKey;
@end

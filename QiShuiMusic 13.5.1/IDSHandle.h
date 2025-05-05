@interface IDSHandle : NSObject
@property (nonatomic) IDSURI URI;
@property (nonatomic) BOOL isUserVisible;
@property (nonatomic) q validationStatus;
- (id)URI;
- (long long)validationStatus;
- (BOOL)isEqualToHandle:;
- (unsigned long long)hash;
- (id)initWithURI:isUserVisible:validationStatus:;
- (BOOL)isUserVisible;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
@end

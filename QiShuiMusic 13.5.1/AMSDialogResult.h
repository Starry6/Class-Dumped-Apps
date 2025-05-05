@interface AMSDialogResult : NSObject
@property (nonatomic) AMSDialogRequest originalRequest;
@property (nonatomic) NSString selectedActionIdentifier;
@property (nonatomic) NSArray textfieldValues;
@property (nonatomic) NSMutableDictionary userInfo;
- (id)userInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)originalRequest;
- (id)initWithOriginalRequest:selectedActionIdentifier:;
- (id)selectedActionIdentifier;
- (void)setSelectedActionIdentifier:;
- (id)textfieldValues;
- (void)setTextfieldValues:;
+ (BOOL)supportsSecureCoding;
@end

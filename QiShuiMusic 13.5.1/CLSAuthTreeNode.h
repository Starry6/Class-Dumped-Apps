@interface CLSAuthTreeNode : NSObject
@property (nonatomic) NSString statusID;
@property (nonatomic) NSString identifier;
@property (nonatomic) q status;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)statusID;
- (id)initWithStatusID:identifier:status:;
+ (BOOL)supportsSecureCoding;
@end

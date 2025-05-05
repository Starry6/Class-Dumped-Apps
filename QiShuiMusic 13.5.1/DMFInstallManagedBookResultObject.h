@interface DMFInstallManagedBookResultObject : CATTaskResultObject
@property (nonatomic) DMFBook book;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBook:;
- (id)book;
+ (BOOL)supportsSecureCoding;
@end

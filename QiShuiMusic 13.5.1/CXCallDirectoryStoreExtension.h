@interface CXCallDirectoryStoreExtension : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q primaryKey;
@property (nonatomic) q priority;
@property (nonatomic) q state;
@property (nonatomic) NSDate stateLastModified;
- (void)setPriority:;
- (void)setState:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)primaryKey;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (long long)priority;
- (id)stateLastModified;
- (void)setPrimaryKey:;
- (void)setStateLastModified:;
+ (BOOL)supportsSecureCoding;
@end

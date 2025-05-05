@interface VSFailable : NSObject
@property (nonatomic) q kind;
@property (nonatomic) @ object;
@property (nonatomic) NSError error;
- (void)setKind:;
- (void)setObject:;
- (id)init;
- (id)initWithError:;
- (void)setError:;
- (long long)kind;
- (id)error;
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (void)unwrapObject:error:;
+ (BOOL)supportsSecureCoding;
+ (id)failableWithError:;
+ (id)failableWithObject:;
+ (id)decodableClasses;
@end

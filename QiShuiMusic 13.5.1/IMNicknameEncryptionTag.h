@interface IMNicknameEncryptionTag : NSObject
@property (nonatomic) NSData dataRepresentation;
@property (nonatomic) NSString stringRepresentation;
- (id)stringRepresentation;
- (id)initWithDataRepresentation:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)dataRepresentation;
- (void)setDataRepresentation:;
- (BOOL)isEqualToTag:error:;
+ (id)_tagWithDataRepresentation:length:error:;
+ (id)_tagWithStringRepresentation:length:error:;
@end

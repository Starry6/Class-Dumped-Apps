@interface AVAssetSerializableCreationOptions : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)creationOptions;
- (id)initWithCreationOptions:;
+ (BOOL)supportsSecureCoding;
@end

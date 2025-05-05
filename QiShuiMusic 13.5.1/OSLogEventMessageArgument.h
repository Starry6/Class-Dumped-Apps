@interface OSLogEventMessageArgument : NSObject
@property (nonatomic) Q availability;
@property (nonatomic) Q privacy;
@property (nonatomic) Q category;
@property (nonatomic) Q scalarCategory;
@property (nonatomic) Q scalarType;
@property (nonatomic) NSObject objectRepresentation;
@property (nonatomic) r^v rawBytes;
@property (nonatomic) S rawBytesLength;
@property (nonatomic) Q unsignedInt64Value;
@property (nonatomic) q int64Value;
@property (nonatomic) double doubleValue;
@property (nonatomic) D longDoubleValue;
- (id)rawBytes;
- (long long)int64Value;
- (id)initWithProxy:index:;
- (double)doubleValue;
- (unsigned long long)scalarCategory;
- (unsigned long long)privacy;
- (unsigned long long)availability;
- (unsigned long long)scalarType;
- (id)objectRepresentation;
- (unsigned short)rawBytesLength;
- (id)longDoubleValue;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)category;
@end

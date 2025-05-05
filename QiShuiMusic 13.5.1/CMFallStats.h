@interface CMFallStats : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double iOStime;
@property (nonatomic) NSInteger fallType;
@property (nonatomic) BOOL isNearFall;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (id)description;
- (id)initWithBinarySampleRepresentation:metadata:timestamp:;
- (id)binarySampleRepresentation;
- (id)initWithBufferAndLength:length:;
- (id)itemsIterator;
- (void)_decodeMeta;
- (double)iOStime;
- (int)fallType;
- (BOOL)isNearFall;
- (id)sr_exportRepresentationEnumerator;
+ (BOOL)supportsSecureCoding;
@end

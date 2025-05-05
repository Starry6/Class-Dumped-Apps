@interface GEOCapturedState : NSObject
@property (nonatomic) NSData stateData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (id)archiver:willEncodeObject:;
- (void)encodeWithCoder:;
- (id)stateData;
+ (BOOL)supportsSecureCoding;
+ (id)decoderType;
+ (id)fromStateData:;
@end

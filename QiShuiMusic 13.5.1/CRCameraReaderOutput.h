@interface CRCameraReaderOutput : NSObject
@property (nonatomic) CRCameraReaderOutputInternal objectInternal;
@property (nonatomic) NSString type;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSString formattedStringValue;
- (id)init;
- (void)dealloc;
- (id)type;
- (id)stringValue;
- (void).cxx_destruct;
- (id)formattedStringValue;
- (id)initWithImageReaderOutput:;
- (id)objectInternal;
- (void)setObjectInternal:;
@end

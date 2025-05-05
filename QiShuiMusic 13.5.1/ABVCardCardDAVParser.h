@interface ABVCardCardDAVParser : ABVCardParser
@property (nonatomic) BOOL localRecordHasAdditionalProperties;
@property (nonatomic) NSInteger lastCropRectX;
@property (nonatomic) NSInteger lastCropRectY;
@property (nonatomic) NSInteger lastCropRectWidth;
@property (nonatomic) NSInteger lastCropRectHeight;
@property (nonatomic) NSData lastCropRectChecksum;
- (void)dealloc;
- (id)defaultLabel;
- (id)initWithData:watchdogTimer:;
- (void)cleanUpCardState;
- (void)noteLackOfValueForProperty:;
- (void)noteLackOfValueForImageData;
- (void)setLocalRecordHasAdditionalProperties:;
- (id)genericLabel;
- (id)defaultADRLabel;
- (id)defaultURLLabel;
- (BOOL)parseUID;
- (BOOL)_handleUnknownTag:withValue:;
- (BOOL)importToPerson:removeExistingProperties:;
- (BOOL)importToGroup:removeExistingProperties:;
- (id)createRecordInSource:outRecordType:;
- (BOOL)localRecordHasAdditionalProperties;
- (int)lastCropRectX;
- (int)lastCropRectY;
- (int)lastCropRectWidth;
- (int)lastCropRectHeight;
- (id)lastCropRectChecksum;
@end

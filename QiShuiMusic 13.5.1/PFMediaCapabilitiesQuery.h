@interface PFMediaCapabilitiesQuery : NSObject
@property (nonatomic) NSMutableDictionary capabilitiesInformation;
- (id)init;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:;
- (void)addVersion;
- (void)addCodecInformation;
- (void)addVersion1And2HEVCCodecInformationToDictionary:;
- (void)addCodecSupportInformationToDictionary:;
- (void)addHEIFContainerInformationToDictionary:;
- (void)addVendorSpecificInformation;
- (void)addTranscodeChoiceWithOptions:;
- (void)addLivePhotoInformationToDictionary:;
- (void)addAssetBundleInformationToDictionary:;
- (id)capabilitiesInformation;
- (void)setCapabilitiesInformation:;
@end

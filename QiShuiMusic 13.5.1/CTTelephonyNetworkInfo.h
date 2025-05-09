@interface CTTelephonyNetworkInfo : NSObject
@property (nonatomic) NSMutableDictionary serviceSubscriberCellularProviders;
@property (nonatomic) NSMutableDictionary cachedCurrentRadioAccessTechnology;
@property (nonatomic) NSMutableDictionary cachedSignalStrength;
@property (nonatomic) NSMutableDictionary cachedCellIds;
@property (nonatomic) NSInteger cachedDataBearerCellularTechnology;
@property (nonatomic) BOOL dataBearerCellularTechnologyInitialized;
@property (nonatomic) I cachedNrFrequencyRange;
@property (nonatomic) BOOL nrFrequencyRangeInitialized;
@property (nonatomic) CTServiceDescriptorContainer descriptors;
@property (nonatomic) {queue={object=^{dispatch_object_s}}} clientQueue;
@property (nonatomic) NSString dataServiceIdentifier;
@property (nonatomic) <CTTelephonyNetworkInfoDelegate> delegate;
@property (nonatomic) CTCarrier subscriberCellularProvider;
@property (nonatomic) @? serviceSubscriberCellularProvidersDidUpdateNotifier;
@property (nonatomic) @? subscriberCellularProviderDidUpdateNotifier;
@property (nonatomic) NSDictionary serviceCurrentRadioAccessTechnology;
@property (nonatomic) NSString currentRadioAccessTechnology;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)signalStrength;
- (void)signalStrengthChanged:info:;
- (void)carrierBundleChange:;
- (id)descriptors;
- (id)initWithClient:;
- (void)setServiceSubscriberCellularProvidersDidUpdateNotifier:;
- (id)init;
- (id)radioAccessTechnology;
- (id)clientQueue;
- (void)postNotificationIfReady:object:;
- (void)setClientQueue:;
- (void)dealloc;
- (void)setServiceSubscriberCellularProviderDidUpdateNotifier:;
- (BOOL)getCarrierName:forContext:withError:;
- (BOOL)getMobileNetworkCode:forContext:withError:;
- (id)cellId;
- (id)dataServiceIdentifier;
- (void)setDelegate:;
- (void)setCachedSignalStrength:;
- (void)setCachedCellIds:;
- (id)serviceSignalStrength;
- (void)updateSignalStrength:descriptor:;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:forContext:;
- (void)setCachedCurrentRadioAccessTechnology:;
- (BOOL)dataBearerCellularTechnologyInitialized;
- (void)setServiceSubscriberCellularProviders:;
- (int)cachedDataBearerCellularTechnology;
- (void)updateLegacyRat:;
- (void)queryCTSignalStrength;
- (id)subscriberCellularProviderDidUpdateNotifier;
- (id)currentNrFrequencyRange;
- (void)setSubscriberCellularProviderDidUpdateNotifier:;
- (void)tryInitDelegatePlus;
- (id)cachedCurrentRadioAccessTechnology;
- (id)subscriberCellularProvider;
- (BOOL)getAllowsVOIP:forContext:withError:;
- (void)regDataModeChanged:dataMode:;
- (void)cellChanged:cell:;
- (void)setDataBearerCellularTechnologyInitialized:;
- (BOOL)nrFrequencyRangeInitialized;
- (void)updateCellId:forDescriptor:;
- (void)queryDataBearer;
- (id)currentDataBearerTechnology;
- (id)serviceCellId;
- (void)currentDataServiceDescriptorChanged:;
- (BOOL)getMobileCountryCode:andIsoCountryCode:forContext:withError:;
- (void)queryRat;
- (void)queryRatForDescriptor:;
- (id)cachedSignalStrength;
- (id)cachedCellIds;
- (id)delegate;
- (id)serviceSubscriberCellularProvidersDidUpdateNotifier;
- (void).cxx_destruct;
- (void)tryInitNrFrequencyRange;
- (void)queryNrFrequencyRange;
- (unsigned int)cachedNrFrequencyRange;
- (void)updateRat:descriptor:;
- (id)currentRadioAccessTechnology;
- (void)updateDataBearer:;
- (id)serviceSubscribersCellularProviderDidUpdateNotifier;
- (id)serviceSubscriberCellularProviders;
- (void)tryInitPrivateFunctionality;
- (void)updateNrFrequencyRange:;
- (id)getFirstCellId;
- (void)tryInitDataBearer;
- (void)setNrFrequencyRangeInitialized:;
- (id)serviceCurrentRadioAccessTechnology;
- (void)queryCellIds;
- (void)dataStatusUpdate:dataStatusInfo:;
- (void)setCachedDataBearerCellularTechnology:;
- (void)querySignalStrengthForDescriptor:;
- (id).cxx_construct;
- (void)setCachedNrFrequencyRange:;
+ (id)currentRaidoAccess;
@end

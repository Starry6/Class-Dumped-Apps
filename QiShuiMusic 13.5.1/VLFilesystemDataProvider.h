@interface VLFilesystemDataProvider : NSObject
@property (nonatomic) <VLLocalizationDataProviderDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)initWithBaseDirectory:;
- (void)determineAvailabilityForCoordinate:horizontalAccuracy:purpose:callbackQueue:callback:;
- (id)fileURLForKey:error:;
- (id)delegate;
- (void).cxx_destruct;
@end

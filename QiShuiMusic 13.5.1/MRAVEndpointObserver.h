@interface MRAVEndpointObserver : NSObject
@property (nonatomic) @? endpointChangedCallback;
@property (nonatomic) NSString outputDeviceUID;
@property (nonatomic) MRAVEndpoint endpoint;
@property (nonatomic) NSString label;
- (void)end;
- (void)dealloc;
- (id)initWithOutputDeviceUID:;
- (id)label;
- (id)debugDescription;
- (id)outputDeviceUID;
- (void).cxx_destruct;
- (id)endpoint;
- (id)description;
- (void)begin;
- (void)_handleOutputContextDidChangeNotification;
- (id)initWithOutputDeviceUID:label:callback:;
- (void)setEndpointChangedCallback:;
- (id)endpointChangedCallback;
@end

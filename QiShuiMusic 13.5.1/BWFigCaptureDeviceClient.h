@interface BWFigCaptureDeviceClient : NSObject
@property (nonatomic) NSInteger clientID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString clientDescription;
@property (nonatomic) NSInteger clientPriority;
@property (nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (nonatomic) @? deviceAvailabilityChangedHandler;
@property (nonatomic) NSMutableArray portTypesAllowingStreamControlLoss;
- (id)clientDescription;
- (void)dealloc;
- (int)clientPriority;
- (void)setDeviceAvailabilityChangedHandler:;
- (id)initWithPID:clientDescription:clientPriority:canStealFromClientsWithSamePriority:deviceSharingWithOtherClientsAllowed:deviceAvailabilityChangedHandler:;
- (id)debugDescription;
- (BOOL)canStealFromClientsWithSamePriority;
- (id)deviceAvailabilityChangedHandler;
- (int)pid;
- (BOOL)deviceSharingWithOtherClientsAllowed;
- (id)description;
- (id)portTypesAllowingStreamControlLoss;
- (BOOL)canShareDeviceWithClientPID:deviceAvailabilityChangedHandler:;
- (void)setPortTypesAllowingStreamControlLoss:;
- (int)clientID;
- (BOOL)isEqual:;
@end

@interface AWECloudCommandNetDiagnoseConnect : NSObject
@property (nonatomic) AWECloudCommandNetDiagnoseSimplePing pinger;
@property (nonatomic) q currentLoop;
@property (nonatomic) q maxLoop;
@property (nonatomic) NSString address;
@property (nonatomic) double startTS;
@property (nonatomic) <AWECloudCommandNetDiagnoseConnectDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)startTS;
- (long long)maxLoop;
- (void)setCurrentLoop:;
- (void)_pingCallbackWithLog:;
- (void)_sendPing;
- (void)_timeourtFired;
- (long long)currentLoop;
- (void)setMaxLoop:;
- (void)setPinger:;
- (void)setStartTS:;
- (void)startPingWithHost:maxLoop:;
- (void)simplePing:didReceivePingResponsePacket:sequenceNumber:;
- (void)simplePing:didSendPacket:sequenceNumber:;
- (void)simplePing:didStartWithAddress:;
- (void)setDelegate:;
- (void)setAddress:;
- (void)stop;
- (void)simplePing:didFailToSendPacket:sequenceNumber:error:;
- (void)simplePing:didFailWithError:;
- (void)simplePing:didReceiveUnexpectedPacket:;
- (id)delegate;
- (void).cxx_destruct;
- (id)address;
- (id)pinger;
+ (id)_displayAddressForAddress:;
+ (id)_failLogForError:;
@end

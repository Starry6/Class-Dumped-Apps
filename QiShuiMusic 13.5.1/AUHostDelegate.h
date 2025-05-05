@interface AUHostDelegate : NSObject
@property (nonatomic) AUAudioUnit audioUnit;
- (id)init;
- (void)setAudioUnit:;
- (void)propertiesChanged:;
- (void).cxx_destruct;
- (id)audioUnit;
- (void)MIDICIProfileChanged:channel:profile:enabled:;
- (void)speechSynthesisMetadataAvailable:speechRequest:;
- (void)syncParameter:value:extOriginator:hostTime:eventType:;
@end

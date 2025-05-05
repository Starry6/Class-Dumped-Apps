@interface ByteRTCSpatialAudio : NSObject
- (void)disableRemoteOrientation;
- (void)enableSpatialAudio:;
- (int)removeAllRemotePosition;
- (int)removeRemotePosition:;
- (int)updateRemotePosition:positionInfo:;
- (int)updateSelfPosition:;
- (id)initWithSpatialAudio:;
- (int)updateSelfOrientation:;
- (int)updateListenerPosition:;
- (int)updateListenerOrientation:;
- (void)dealloc;
- (int)updatePosition:;
@end

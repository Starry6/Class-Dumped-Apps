@interface AWEPOILynxNativeModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)publishEvent:;
- (id)constData;
- (id)splitText:byMaxWidth:fontSize:;
- (double)getTextWidthWithText:fontSize:;
- (double)getTextWidthByParams:;
- (id)spiltTextByParams:;
- (id)setPoiStorageItems:completion:;
- (id)getPoiStorageItems:;
- (id)operatePoiLocationEmbeddedTip:;
- (void)addObserverOfEmbededTip;
- (void)didEmbededTipBecomeActiveNotification:;
- (void)dealloc;
- (id)fetchSessionInfo:;
+ (id)methodLookup;
+ (id)name;
@end

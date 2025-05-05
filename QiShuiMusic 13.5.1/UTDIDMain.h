@interface UTDIDMain : NSObject
- (void)preInit;
- (id)generateUtdidAndSave;
- (BOOL)isUtdidValid:;
- (void)removeUtdid;
- (void)saveUtdid:;
- (id)data;
- (void).cxx_destruct;
+ (id)generateUtdid;
+ (id)uniqueGlobalDeviceIdentifier;
@end

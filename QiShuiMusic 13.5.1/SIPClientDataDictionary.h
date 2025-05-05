@interface SIPClientDataDictionary : NSObject
- (id)init;
- (void)dealloc;
- (id)copyObjectForKey:p2pID:;
- (void)setObject:forKey:forP2PID:;
@end

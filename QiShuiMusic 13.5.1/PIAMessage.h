@interface PIAMessage : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) I methodCount;
@property (nonatomic) ^{objc_method_description=:*} methods;
@property (nonatomic) Protocol messageKey;
@property (nonatomic) PIAMessageHash hashObserver;
- (void)setMethodCount:;
- (id)getObserversArrayForMessageKey:;
- (id)getAllMethodOfProtocol:;
- (id)hashObserver;
- (unsigned int)methodCount;
- (void)registerMessage:;
- (void)setHashObserver:;
- (void)unregisterMessage:;
- (id)methods;
- (id)lock;
- (void).cxx_destruct;
- (id)initWithKey:;
- (void)setLock:;
- (id)messageKey;
- (void)setMessageKey:;
- (void)setMethods:;
@end

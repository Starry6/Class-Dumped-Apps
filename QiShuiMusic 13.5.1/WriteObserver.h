@interface WriteObserver : NSObject
@property (nonatomic) <OSADiagnosticWriteObserver> observer;
@property (nonatomic) NSSet bugTypes;
- (void).cxx_destruct;
- (BOOL)matches:;
- (id)observer;
- (id)initWithObserver:bugTypes:;
- (id)bugTypes;
- (void)deliverWillWrite:on:;
- (void)deliverDidWrite:on:;
@end

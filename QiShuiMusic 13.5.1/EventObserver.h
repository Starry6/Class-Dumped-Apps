@interface EventObserver : NSObject
@property (nonatomic) <OSADiagnosticEventObserver> observer;
@property (nonatomic) NSSet bugTypes;
- (void).cxx_destruct;
- (BOOL)matches:;
- (id)observer;
- (id)initWithObserver:bugTypes:;
- (void)deliverEvent:on:;
- (id)bugTypes;
@end

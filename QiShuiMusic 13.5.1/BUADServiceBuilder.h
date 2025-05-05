@interface BUADServiceBuilder : NSObject
- (id)getObject:name:;
- (void)configureModule:;
- (id)getObject:argumentList:;
- (id)getObject:name:argumentList:;
- (id)getObject:name:initializer:argumentList:;
- (id)initWithContext:modules:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)addModules:;
- (void)addModule:;
- (id)getObject:;
@end

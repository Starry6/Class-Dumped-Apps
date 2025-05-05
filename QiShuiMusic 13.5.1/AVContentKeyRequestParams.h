@interface AVContentKeyRequestParams : NSObject
@property (nonatomic) NSData initializationData;
@property (nonatomic) NSData contentIdentifier;
@property (nonatomic) NSData keyIDFromInitializationData;
@property (nonatomic) NSDictionary options;
@property (nonatomic) @ identifier;
- (void)setOptions:;
- (void)dealloc;
- (id)contentIdentifier;
- (id)identifier;
- (void)setContentIdentifier:;
- (id)options;
- (void)setIdentifier:;
- (id)keyIDFromInitializationData;
- (id)initializationData;
- (id)initWithInitializationData:contentIdentifier:keyIDFromInitializationData:options:identifier:;
- (void)setInitializationData:;
- (void)setKeyIDFromInitializationData:;
@end

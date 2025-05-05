@interface TKToken : NSObject
@property (nonatomic) TKTokenKeychainContents keychainContents;
@property (nonatomic) TKTokenID tokenID;
@property (nonatomic) TKTokenDriver tokenDriver;
@property (nonatomic) <TKTokenDelegate> delegate;
@property (nonatomic) TKTokenConfiguration configuration;
- (void)terminate;
- (void)setDelegate:;
- (id)tokenID;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTokenDriver:instanceID:;
- (id)tokenDriver;
- (id)keychainContents;
- (void)setKeychainContents:;
@end

@interface ICAuthorizeMachineResponse : NSObject
@property (nonatomic) NSData keybagData;
@property (nonatomic) NSData tokenData;
- (id)initWithResponseDictionary:;
- (void).cxx_destruct;
- (id)tokenData;
- (id)keybagData;
@end

@interface IESIMNetworkRequestResponse : NSObject
@property (nonatomic) IESIMNetworkRequestCommand command;
@property (nonatomic) @ value;
@property (nonatomic) NSError error;
- (id)initWithCommand:value:error:;
- (id)mapModel:;
- (id)mapModel:targetAttributes:;
- (id)map:;
- (id)error;
- (id)command;
- (void).cxx_destruct;
- (id)value;
- (id)flatMap:;
@end

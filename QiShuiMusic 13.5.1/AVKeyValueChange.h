@interface AVKeyValueChange : NSObject
@property (nonatomic) @ value;
@property (nonatomic) @ oldValue;
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ observationToken;
- (id)observationToken;
- (id)initWithValue:oldValue:keyPath:observationToken:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)value;
- (id)oldValue;
@end

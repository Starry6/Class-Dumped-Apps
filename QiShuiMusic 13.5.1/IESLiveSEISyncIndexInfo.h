@interface IESLiveSEISyncIndexInfo : NSObject
@property (nonatomic) NSNumber value;
@property (nonatomic) double receiveTS;
- (double)receiveTS;
- (void)setReceiveTS:;
- (BOOL)updateIfNeededWithValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
@end

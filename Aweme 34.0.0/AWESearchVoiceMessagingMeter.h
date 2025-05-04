@interface AWESearchVoiceMessagingMeter : NSObject
@property (nonatomic) double offset;
@property (nonatomic) q orientation;
@property (nonatomic) q position;
@property (nonatomic) q end;
@property (nonatomic) double value;
- (double)value;
- (void)setEnd:;
- (id)init;
- (void)setOrientation:;
- (void)setOffset:;
- (double)offset;
- (long long)end;
- (long long)position;
- (void)setValue:;
- (void)setPosition:;
- (long long)orientation;
- (void)updateValue;
- (void)updateTarget:;
@end

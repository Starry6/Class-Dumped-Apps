@interface LPAudioPlayButtonTheme : NSObject
@property (nonatomic) UIColor keyColor;
@property (nonatomic) UIColor secondaryColor;
@property (nonatomic) UIColor outerBorderColor;
@property (nonatomic) BOOL useInvertedInactiveState;
- (id)secondaryColor;
- (void).cxx_destruct;
- (id)keyColor;
- (id)initWithKeyColor:secondaryColor:outerBorderColor:useInvertedInactiveState:;
- (id)outerBorderColor;
- (BOOL)useInvertedInactiveState;
@end

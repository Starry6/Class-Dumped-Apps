@interface NUIGridDimension : NSObject
@property (nonatomic) NSArray arrangedSubviews;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double length;
@property (nonatomic) double spacingAfter;
@property (nonatomic) q alignment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setAlignment:;
- (id)arrangedSubviews;
- (void)setSpacingAfter:;
- (void)setHidden:;
- (double)length;
- (double)spacingAfter;
- (void)setLength:;
- (long long)alignment;
- (BOOL)isHidden;
@end

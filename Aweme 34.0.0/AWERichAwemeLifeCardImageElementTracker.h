@interface AWERichAwemeLifeCardImageElementTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackLifeCardImageClick:clickType:model:tabRank:extraInfo:;
+ (void)trackLifeCardImageButtonShow:model:extraInfo:;
+ (void)trackLifeCardImageShow:source:model:tabRank:extraInfo:;
+ (BOOL)isSameCity:;
+ (id)clickTypeString:;
@end

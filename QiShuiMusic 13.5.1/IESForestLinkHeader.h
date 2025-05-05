@interface IESForestLinkHeader : NSObject
+ (void)_addLinkHeaderItem:toPreloadDic:;
+ (id)_parseAs:;
+ (id)_parseLinkHeaderItemContent:;
+ (id)_parseRel:;
+ (id)_parseUrl:;
+ (void)parse:mainUrl:completion:;
@end

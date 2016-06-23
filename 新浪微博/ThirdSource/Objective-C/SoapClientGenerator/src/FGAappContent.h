//----------------------------------------------------
//
// Generated by www.easywsdl.com
// Version: 4.1.8.0
//
// Created by Quasar Development at 15-10-2015
//
//---------------------------------------------------


#import <Foundation/Foundation.h>

#import "FGARequestResultHandler.h"
#import "DDXML.h"



@interface FGAappContent : NSObject <FGAISerializableObject>


@property (retain,nonatomic,getter=getAuthor) NSString* author;

@property (retain,nonatomic,getter=getChannelId) NSNumber* channelId;

@property (retain,nonatomic,getter=getContentId) NSNumber* contentId;

@property (retain,nonatomic,getter=getDescription) NSString* description;

@property (retain,nonatomic,getter=getReleaseDate) NSDate* releaseDate;

@property (retain,nonatomic,getter=getShortTitle) NSString* shortTitle;

@property (retain,nonatomic,getter=getTitle) NSString* title;

@property (retain,nonatomic,getter=getTxt) NSString* txt;
-(id)init;
-(id)initWithXml: (DDXMLElement*)__node __request:(FGARequestResultHandler*) __request;
+(FGAappContent*) createWithXml:(DDXMLElement*)__node __request:(FGARequestResultHandler*) __request;
-(void) serialize:(DDXMLElement*)__parent __request:(FGARequestResultHandler*) __request;
@end